//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ISSupport/ISS_DMDAVPost.h>

@class ISS_MMiDiskSession, NSArray, NSMutableSet;

@interface ISS_DMMkpathsRequest : ISS_DMDAVPost
{
    ISS_MMiDiskSession *_iDiskSession;
    NSArray *_paths;
    NSMutableSet *_lockTokens;
}

- (void)dealloc;
- (id)_lockHeaderWithTokens:(id)arg1;
- (id)_errorsFromResponse;
- (id)_generateRequestBody;
- (id)initWithIDiskSession:(id)arg1 andPaths:(id)arg2;

@end

