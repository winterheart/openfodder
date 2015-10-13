/*
 *  Cannon Fodder
 *  ------------------------
 *
 *  Copyright (C) 2008-2015 Robert Crossfield <robcrossfield@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

class cSound_Amiga : public cSound {

	SDL_AudioSpec*		mAudioSpec;
	int					mVal;

	bool				devicePrepare();

	public:

						cSound_Amiga();
						~cSound_Amiga();

	void				audioBufferFill( short *pBuffer, int pBufferSize );


	void				Sound_Play( int16 pBx, int16 pData4 );

	void				Music_Play( int16 pTrack );
	void				Music_Stop();
};
