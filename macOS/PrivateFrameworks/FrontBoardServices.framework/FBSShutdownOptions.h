//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSXPCCoding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>

@class NSString;
@protocol NSCopying;

@interface FBSShutdownOptions : NSObject <BSXPCCoding, NSCopying>
{
    NSString *_reason;
    long long _rebootType;
    long long _source;
    long long _LPEMOption;
    id <NSCopying> _localContext;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NSCopying> localContext; // @synthesize localContext=_localContext;
@property(nonatomic) long long LPEMOption; // @synthesize LPEMOption=_LPEMOption;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long rebootType; // @synthesize rebootType=_rebootType;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) BOOL isUserInitiated;
@property(readonly, nonatomic) BOOL isReboot;
@property(readonly, nonatomic) BOOL isShutdown;
- (id)initWithReason:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

