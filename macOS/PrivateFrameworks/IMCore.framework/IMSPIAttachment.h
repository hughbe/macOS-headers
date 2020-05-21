//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, NSURL;

@interface IMSPIAttachment : NSObject
{
    NSString *_guid;
    NSURL *_fileUrl;
    long long _fileTransferState;
    NSString *_uti;
    BOOL _isSticker;
    BOOL _isOutgoing;
    NSDictionary *_attributionInfo;
    NSDate *_creationDate;
}

- (void).cxx_destruct;
@property(readonly) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain) NSDictionary *attributionInfo; // @synthesize attributionInfo=_attributionInfo;
@property BOOL isOutgoing; // @synthesize isOutgoing=_isOutgoing;
@property BOOL isSticker; // @synthesize isSticker=_isSticker;
@property(retain) NSString *uti; // @synthesize uti=_uti;
@property(retain) NSString *guid; // @synthesize guid=_guid;
@property long long fileTransferState; // @synthesize fileTransferState=_fileTransferState;
@property(retain) NSURL *fileUrl; // @synthesize fileUrl=_fileUrl;
- (id)description;
- (id)bundleID;
- (id)initWithGuid:(id)arg1 fileUrl:(id)arg2 transferState:(long long)arg3 uti:(id)arg4 isSticker:(BOOL)arg5 isOutgoing:(BOOL)arg6 attributionInfo:(id)arg7 creationDate:(id)arg8;

@end

