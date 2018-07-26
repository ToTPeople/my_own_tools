--------------------------------------
-- param: 
--- source:			const std::string 
--- startPos:			int64_t
--- duration:			int64_t
--- fileStartTime:			int64_t
-- return:			static MTMVTrack *
-- Attributes:		public
--------------------------------------
function TTTtestTTT:CreateNormalTrack( source, startPos, duration, fileStartTime )
end

--------------------------------------
-- param: 
--- source:			const std::string 
--- startPos:			int64_t
--- duration:			int64_t
--- fileStartTime:			int64_t
-- return:			static MTMVTrack *
-- Attributes:		public
--------------------------------------
function TTTtestTTT:CreateVideoTrack( source, startPos, duration, fileStartTime )
end

--------------------------------------
-- param: 
--- source:			const std::string 
--- startPos:			int64_t
--- duration:			int64_t
--- fileStartTime:			int64_t
-- return:			static MTMVTrack *
-- Attributes:		public
--------------------------------------
function TTTtestTTT:CreateVideoMaterialTrack( source, startPos, duration, fileStartTime )
end

--------------------------------------
-- param: 
--- source:			const std::string 
--- startPos:			int64_t
--- duration:			int64_t
--- fileStartTime:			int64_t
-- return:			static MTMVTrack *
-- Attributes:		public
--------------------------------------
function TTTtestTTT:CreateMusicTrack( source, startPos, duration, fileStartTime )
end

--------------------------------------
-- return:			virtual 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:~MTMVTrack(  )
end

--------------------------------------
-- return:			virtual void 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:cleanup(  )
end

--------------------------------------
-- param: 
--- graphicService:			CBaseGraphicsService 
-- return:			virtual void 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:glPrepare( graphicService )
end

--------------------------------------
-- param: 
--- buffer:			unsigned char 
--- len:			int 
-- return:			virtual bool 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:getAudioFrame( buffer, len )
end

--------------------------------------
-- param: 
--- graphicService:			CBaseGraphicsService 
--- reqTime:			int64_t
-- return:			virtual int 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:getNextFrame( graphicService, reqTime )
end

--------------------------------------
-- return:			virtual void 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:start(  )
end

--------------------------------------
-- return:			virtual void 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:stop(  )
end

--------------------------------------
-- return:			virtual void 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:startDecoder(  )
end

--------------------------------------
-- return:			virtual void 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:stopDecoder(  )
end

--------------------------------------
-- return:			virtual void 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:cleanMediaCodec(  )
end

--------------------------------------
-- return:			virtual void 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:releaseMediaCodec(  )
end

--------------------------------------
-- param: 
--- graphicService:			CBaseGraphicsService
-- return:			virtual void 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:tagRecycleResource( graphicService )
end

--------------------------------------
-- param: 
--- clock:			int64_t
-- return:			virtual int 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:doReadPkt( clock )
end

--------------------------------------
-- param: 
--- clock:			int64_t
-- return:			virtual int 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:doDecodeVideoFrame( clock )
end

--------------------------------------
-- return:			virtual int 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:doDecodeAudioFrame(  )
end

--------------------------------------
-- param: 
--- buffer:			unsigned char 
--- len:			int
-- return:			virtual int 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:readAudio( buffer, len )
end

--------------------------------------
-- return:			virtual int 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:getAudioLength(  )
end

--------------------------------------
-- return:			virtual bool 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:hasVideo(  )
end

--------------------------------------
-- return:			virtual bool 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:hasAudio(  )
end

--------------------------------------
-- param: 
--- clock:			int64_t
--- nextClock:			int64_t 
-- return:			virtual int 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:doAnalysisPeakValueOfVideo( clock, nextClock )
end

--------------------------------------
-- param: 
--- msec:			int64_t
--- seekType:			int
--- mode:			int
-- return:			virtual void 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:seekTo( msec, seekType, mode )
end

--------------------------------------
-- param: 
--- SEEK_TYPE_SYNC:			int seekType =
--- SEEK_MODE_NORMAL:			int mode =
-- return:			virtual void 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:seekToFileStart( SEEK_TYPE_SYNC, SEEK_MODE_NORMAL )
end

--------------------------------------
-- param: 
--- speed:			float
-- return:			virtual void 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:setSpeed( speed )
end

--------------------------------------
-- param: 
--- p1X:			double
--- p1Y:			double
--- p2X:			double
--- p2Y:			double
--- precision:			double
-- return:			void 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:setBezierParam( p1X, p1Y, p2X, p2Y, precision )
end

--------------------------------------
-- return:			void 
-- Attributes:		public
--------------------------------------
function TTTtestTTT:switchAudioTrack(  )
end

--------------------------------------
-- param: 
--- id:			int
--- source:			const std::string 
--- startPos:			int64_t
--- duration:			int64_t
--- fileStartTime:			int64_t
-- return:			void 
-- Attributes:		protected
--------------------------------------
function TTTtestTTT:switchAudioTrack( id, source, startPos, duration, fileStartTime )
end

--------------------------------------
-- param: 
--- speed:			float
-- return:			virtual void 
-- Attributes:		protected
--------------------------------------
function TTTtestTTT:setSpeedNoOrig( speed )
end

