//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KHDBMessageOptions;
@protocol KHDBSelectorDelegate;

@interface KHDBSelector : NSObject
{
    SEL _selector;
    KHDBMessageOptions *_messageOptions;
    long long _selectorPriority;
    id <KHDBSelectorDelegate> _delegate;
}

+ (id)argumentKeys;
+ (void)initialize;
@property(nonatomic) id <KHDBSelectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selectorPriority; // @synthesize selectorPriority=_selectorPriority;
- (void)asycPerformSelectorOnHgQueue:(id)arg1 forTarget:(id)arg2;
- (void)asycPerformSelectorOnHgQueue:(id)arg1 forTarget:(id)arg2 withObjects:(id)arg3;
- (void)asycPerformSelectorOnQueue:(id)arg1 forTarget:(id)arg2;
- (void)asycPerformSelectorOnQueue:(id)arg1 forTarget:(id)arg2 withObjects:(id)arg3;
- (id)newSelectorOperationForTarget:(id)arg1 withObject:(id)arg2 additionalObjects:(struct __va_list_tag [1])arg3;
- (id)performSelectorOnObject:(id)arg1 arg1:(id)arg2 arg2:(id)arg3 arg3:(id)arg4 arg4:(id)arg5;
- (id)performIdSelectorOnObject:(id)arg1 arg1:(id)arg2 arg2:(id)arg3 arg3:(id)arg4 arg4:(id)arg5;
- (BOOL)performBoolSelectorOnObject:(id)arg1 arg1:(id)arg2 arg2:(id)arg3 arg3:(id)arg4 arg4:(id)arg5;
- (void)performVoidSelectorOnObject:(id)arg1 arg1:(id)arg2 arg2:(id)arg3 arg3:(id)arg4 arg4:(id)arg5;
- (id)description;
- (id)messageOptions;
- (SEL)selector;
- (void)dealloc;
- (id)initWithSelector:(SEL)arg1 messageOptions:(id)arg2;

@end

