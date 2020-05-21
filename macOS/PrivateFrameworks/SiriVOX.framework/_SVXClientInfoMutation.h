//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXClientInfoMutating-Protocol.h>

@class NSString, SVXClientInfo;

@interface _SVXClientInfoMutation : NSObject <SVXClientInfoMutating>
{
    SVXClientInfo *_baseModel;
    int _processIdentifier;
    NSString *_processName;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasProcessIdentifier:1;
        unsigned int hasProcessName:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setProcessName:(id)arg1;
- (void)setProcessIdentifier:(int)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

