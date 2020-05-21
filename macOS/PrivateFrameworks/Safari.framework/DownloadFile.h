//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface DownloadFile : NSObject
{
    NSString *_initialDownloadPath;
    int _type;
    NSData *_bookmarkData;
    BOOL _isAliasOrSymlink;
    BOOL _isSubFile;
    BOOL _isTrashed;
    NSDictionary *_securityAssessment;
    NSArray *_temporaryFiles;
}

+ (id)filesForUnarchivedFileAtPath:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *bookmarkData; // @synthesize bookmarkData=_bookmarkData;
- (id)securityAssessment;
- (id)description;
- (BOOL)isMovableOrRemovable;
- (void)setIsTrashed:(BOOL)arg1;
- (BOOL)isTrashed;
- (void)setIsSubFile:(BOOL)arg1;
- (BOOL)isSubFile;
- (void)setTypeWithEncoding:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (BOOL)isGZIP;
- (BOOL)isBOM;
- (BOOL)isArchive;
- (id)path;
- (id)aliasedOrOriginalPath;
- (id)initWithBookmarkData:(id)arg1 pathString:(id)arg2;
- (id)initWithPath:(id)arg1;
- (void)setPath:(id)arg1;
- (void)_setInitialDownloadPath:(id)arg1;
- (BOOL)_isGZIP;
- (BOOL)_isBOM;
- (BOOL)_isMIMEType:(id)arg1;
- (id)_MIMETypeFromExtension;

@end

