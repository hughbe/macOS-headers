//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSSettingDescriptionProvider-Protocol.h>
#import <FrontBoardServices/BSXPCCoding-Protocol.h>
#import <FrontBoardServices/FBSDisplayLayoutElement-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>

@class BSMutableSettings, NSString;

@interface FBSDisplayLayoutElement : NSObject <NSCopying, BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding, FBSDisplayLayoutElement>
{
    NSString *_identifier;
    NSString *_bundleIdentifier;
    struct CGRect _frame;
    struct CGRect _referenceFrame;
    long long _level;
    BOOL _fillsDisplayBounds;
    BOOL _application;
    BOOL _keyboardFocus;
    BSMutableSettings *_otherSettings;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL hasKeyboardFocus; // @synthesize hasKeyboardFocus=_keyboardFocus;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic, getter=isUIApplicationElement) BOOL UIApplicationElement; // @synthesize UIApplicationElement=_application;
@property(nonatomic) BOOL fillsDisplayBounds; // @synthesize fillsDisplayBounds=_fillsDisplayBounds;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) struct CGRect referenceFrame; // @synthesize referenceFrame=_referenceFrame;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (Class)fallbackXPCEncodableClass;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)setOtherSettings:(id)arg1;
@property(readonly, copy, nonatomic) BSMutableSettings *otherSettings; // @synthesize otherSettings=_otherSettings;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

