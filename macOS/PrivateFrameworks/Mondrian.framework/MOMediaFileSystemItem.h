//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mondrian/MOMediaItem.h>

@interface MOMediaFileSystemItem : MOMediaItem
{
}

+ (id)urlForFileURL:(id)arg1;
- (id)thumbnailImageOperationForResolution:(unsigned long long)arg1 size:(struct CGSize)arg2 mode:(unsigned long long)arg3 reason:(unsigned long long)arg4 placeholder:(BOOL)arg5 colorSpace:(id)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;
- (void)_reloadProperties;
- (id)initWithFileURL:(id)arg1;

@end

