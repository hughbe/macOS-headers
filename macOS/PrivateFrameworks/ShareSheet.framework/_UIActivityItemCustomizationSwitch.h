//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ShareSheet/_UIActivityItemCustomization.h>

#import <ShareSheet/_UIActivityItemCustomizationSwitch-Protocol.h>

@class NSString;

@interface _UIActivityItemCustomizationSwitch : _UIActivityItemCustomization <_UIActivityItemCustomizationSwitch>
{
    BOOL _value;
    CDUnknownBlockType __handler;
}

- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setHandler:) CDUnknownBlockType _handler; // @synthesize _handler=__handler;
- (void)_setValue:(BOOL)arg1;
@property(readonly, nonatomic) BOOL value;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 value:(BOOL)arg3 footerText:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

