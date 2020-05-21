//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSError, NSUUID, QLTBitmapFormat;

@protocol QLIncrementalThumbnailGenerationHandler
- (void)failedToGenerateThumbnailOfType:(long long)arg1 forRequestWithUUID:(NSUUID *)arg2 error:(NSError *)arg3;
- (void)didGenerateThumbnailForRequestWithUUID:(NSUUID *)arg1 data:(NSData *)arg2 bitmapFormat:(QLTBitmapFormat *)arg3 metadata:(NSData *)arg4 contentRect:(struct CGRect)arg5 iconFlavor:(int)arg6 thumbnailType:(long long)arg7 clientShouldTakeOwnership:(BOOL)arg8;
- (void)didUpdateStatus:(long long)arg1 ofThumbnailGenerationWithUUID:(NSUUID *)arg2;
@end

