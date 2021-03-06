//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Spotlight/NSCoding-Protocol.h>
#import <Spotlight/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface PRSConversion : NSObject <NSCoding, NSSecureCoding>
{
    NSString *_outputUnit;
    NSNumber *_outputValue;
    NSString *_localizedOutputValue;
    NSString *_localizedOutputUnit;
    NSString *_localizedOutputValueAndUnit;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSString *localizedOutputValueAndUnit; // @synthesize localizedOutputValueAndUnit=_localizedOutputValueAndUnit;
@property(readonly) NSString *localizedOutputUnit; // @synthesize localizedOutputUnit=_localizedOutputUnit;
@property(readonly) NSString *localizedOutputValue; // @synthesize localizedOutputValue=_localizedOutputValue;
@property(readonly) NSNumber *outputValue; // @synthesize outputValue=_outputValue;
@property(readonly) NSString *outputUnit; // @synthesize outputUnit=_outputUnit;
- (id)groupName;
- (id)category;
- (id)initWithUnit:(id)arg1 value:(id)arg2 localizedValue:(id)arg3 localizedUnit:(id)arg4 localizedOutputValueAndUnit:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

