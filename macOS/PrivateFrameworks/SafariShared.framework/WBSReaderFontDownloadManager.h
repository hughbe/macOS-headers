//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WBSReaderFontDownloadManager : NSObject
{
    NSMutableDictionary *_fontFamilyToProgress;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)downloadFont:(id)arg1;
- (double)downloadProgressForFont:(id)arg1;
- (BOOL)hasOngoingRequestForFont:(id)arg1;
- (id)init;

@end

