//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Automator/AMXPCToken.h>

@class NSString;

@interface AMActionInWorkflowXPCToken : AMXPCToken
{
    NSString *_actionUUID;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSString *actionUUID; // @synthesize actionUUID=_actionUUID;
- (id)_am_convertFromXPCWithWorkflow:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;

@end

