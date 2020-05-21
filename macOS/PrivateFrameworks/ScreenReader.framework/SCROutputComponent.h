//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReader/SCROutputThreadedObject.h>

@class NSString, SCRCUserDefaults;

__attribute__((visibility("hidden")))
@interface SCROutputComponent : SCROutputThreadedObject
{
    NSString *_name;
    SCRCUserDefaults *__userDefaults;
}

+ (BOOL)isRunningUnitTests;
+ (void)setIsRunningUnitTests:(BOOL)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setUserDefaults:) SCRCUserDefaults *_userDefaults; // @synthesize _userDefaults=__userDefaults;
- (void)processEmbeddedVOCommandsInAction:(id)arg1;
- (void)replaceVOEmbeddedCommand:(id)arg1 inAction:(id)arg2;
- (void)replaceVOEmbeddedCommand:(id)arg1 withRange:(struct _NSRange)arg2 inAction:(id)arg3;
- (void)setAudioPositionForBusId:(unsigned int)arg1 withAction:(id)arg2;
- (void)_appendModifierStringForKey:(id)arg1 toString:(id)arg2;
- (id)localizedStringForComposedCharacter:(id)arg1 prefix:(id)arg2;
- (id)createModifiersPrefixStringFromAction:(id)arg1;
- (void)setObject:(id)arg1 forAttribute:(id)arg2;
- (id)objectForAttribute:(id)arg1;
- (void)performAction:(id)arg1 delegate:(id)arg2;
- (void)nonBlockingActionsAreComplete;
- (void)dispatchNonBlockingActionsAreComplete;
- (int)preflightSequentialSteps:(id)arg1 runnerName:(id)arg2;
@property(readonly, nonatomic) SCRCUserDefaults *userDefaults;
- (void)setupObservers;
- (id)initWithName:(id)arg1 userDefaults:(id)arg2;

@end

