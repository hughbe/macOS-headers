//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSDisplayPatternBinder.h>

@interface NSDisplayPatternTitleBinder : NSDisplayPatternBinder
{
}

+ (BOOL)isUsableWithObject:(id)arg1;
+ (id)bindingsForObject:(id)arg1;
+ (id)_enumeratedDisplayPatternTitleBindings:(unsigned long long)arg1;
+ (id)objectMechanismsRequiredForObject:(id)arg1;
+ (id)bindingCategory;
- (void)_setDisplayValue:(id)arg1 object:(id)arg2 triggerRedisplay:(BOOL)arg3;
- (id)_patternForBinding:(id)arg1;
- (id)availableBindings;
- (Class)valueClassForBinding:(id)arg1;
- (BOOL)isBindingReadOnly:(id)arg1;
- (void)_init;

@end

