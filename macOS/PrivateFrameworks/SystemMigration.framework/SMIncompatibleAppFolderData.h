//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

@interface SMIncompatibleAppFolderData : NSObject
{
    NSArray *_appFolderData;
    NSURL *_filePath;
}

+ (id)appFolderDataFilePathWithIncompatibleAppFolder:(id)arg1;
+ (id)localizedStringForKey:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSURL *filePath; // @synthesize filePath=_filePath;
@property(retain) NSArray *appFolderData; // @synthesize appFolderData=_appFolderData;
- (BOOL)removeDataFile;
- (BOOL)flushToDisk;
- (unsigned long long)itemCount;
- (id)initWithFolderPath:(id)arg1;

@end

