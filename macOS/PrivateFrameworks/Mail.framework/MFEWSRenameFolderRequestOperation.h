//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/MFEWSRequestOperation.h>

@class MFEWSGetFolderResponseOperation, NSString;

@interface MFEWSRenameFolderRequestOperation : MFEWSRequestOperation
{
    NSString *_folderIdString;
    NSString *_folderName;
    MFEWSGetFolderResponseOperation *_changeKeysResponse;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MFEWSGetFolderResponseOperation *changeKeysResponse; // @synthesize changeKeysResponse=_changeKeysResponse;
@property(readonly, copy, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
@property(readonly, copy, nonatomic) NSString *folderIdString; // @synthesize folderIdString=_folderIdString;
- (id)prepareRequest;
- (BOOL)isFolderRequest;
- (id)activityString;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (id)initWithEWSFolderIdString:(id)arg1 name:(id)arg2 gateway:(id)arg3;

@end

