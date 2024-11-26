// c:/Users/user/Documents/Programming/Music/OnMei/a_Body.hpp

#pragma once
#include "a.hpp"

#include "KanOn/a_Body.hpp"
#include "HenKaKiGou/a_Body.hpp"
#include "../../Mathematics/Arithmetic/Mod/a_Body.hpp"

inline OnMei::OnMei( const KanOn& N ) noexcept : OnMei( N , HenKaKiGou( 0 ) ){}
inline OnMei::OnMei( const KanOn& N , const HenKaKiGou& S ) noexcept : m_N( N ) , m_S( S ), m_pc( KanOnToPitchClass( N ) + S.GetNum() ) {}

inline string OnMei::Display() const noexcept { return m_N.Display() + m_S.Display(); }
inline const KanOn& OnMei::GetKanOn() const noexcept { return m_N; }
inline const HenKaKiGou& OnMei::GetHenKaKiGou() const noexcept { return m_S; }
inline const PitchClass& OnMei::GetPitchClass() const noexcept { return m_pc; }

inline bool operator==( const OnMei& N1 , const OnMei& N2 ) noexcept { return N1.Display() == N2.Display(); }
inline bool operator!=( const OnMei& N1 , const OnMei& N2 ) noexcept { return !( N1 == N2 ); }
