//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class GEOActiveTileSet, GEOTileData, GEOTileRequester, NSDictionary, NSError, NSString;

@protocol GEOTileRequesterDelegate
- (void)tileRequesterFinished:(GEOTileRequester *)arg1;
- (void)tileRequester:(GEOTileRequester *)arg1 receivedError:(NSError *)arg2 forKey:(struct _GEOTileKey)arg3;
- (void)tileRequester:(GEOTileRequester *)arg1 receivedData:(GEOTileData *)arg2 tileEdition:(unsigned int)arg3 tileSetDB:(unsigned int)arg4 tileSet:(GEOActiveTileSet *)arg5 etag:(NSString *)arg6 forKey:(struct _GEOTileKey)arg7 userInfo:(NSDictionary *)arg8;
@end

