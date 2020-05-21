//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/NSSecureCoding-Protocol.h>

@class LSPlugInKitProxy, NSString;

@interface CXCallDirectoryExtension : NSObject <NSSecureCoding>
{
    BOOL _onlyExtensionInContainingApp;
    NSString *_identifier;
    long long _state;
    long long _priority;
    NSString *_localizedName;
    NSString *_localizedContainingAppName;
    LSPlugInKitProxy *_plugInKitProxy;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, getter=isOnlyExtensionInContainingApp) BOOL onlyExtensionInContainingApp; // @synthesize onlyExtensionInContainingApp=_onlyExtensionInContainingApp;
@property(retain, nonatomic) LSPlugInKitProxy *plugInKitProxy; // @synthesize plugInKitProxy=_plugInKitProxy;
@property(copy, nonatomic) NSString *localizedContainingAppName; // @synthesize localizedContainingAppName=_localizedContainingAppName;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

