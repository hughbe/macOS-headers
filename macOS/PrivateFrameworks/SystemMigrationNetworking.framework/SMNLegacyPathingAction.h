//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemMigrationNetworking/SMNAction.h>

@class NSArray, NSString;

@interface SMNLegacyPathingAction : SMNAction
{
    NSString *_operation;
    NSArray *_paths;
    NSArray *_omitPaths;
}

+ (int)actionID;
- (void).cxx_destruct;
@property(retain) NSArray *omitPaths; // @synthesize omitPaths=_omitPaths;
@property(retain) NSArray *paths; // @synthesize paths=_paths;
@property(retain) NSString *operation; // @synthesize operation=_operation;
- (id)resultDictionary;
- (id)slingshotServerInformation;
- (BOOL)success;
- (BOOL)returnsData;
- (BOOL)setResultFromDict:(id)arg1;
- (id)resultData;
- (id)description;
- (id)requestPayload;
- (id)arrayOfStrings:(id)arg1;
@property(readonly, getter=isHandshake) BOOL handshake;
- (id)initWithOperation:(id)arg1 paths:(id)arg2 omitPaths:(id)arg3;

@end

