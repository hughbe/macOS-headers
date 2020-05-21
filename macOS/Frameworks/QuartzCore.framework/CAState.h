//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSCopying-Protocol.h>
#import <QuartzCore/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface CAState : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;
    NSString *_basedOn;
    NSMutableArray *_elements;
    double _nextDelay;
    double _previousDelay;
    BOOL _enabled;
    BOOL _locked;
    BOOL _initial;
}

+ (BOOL)supportsSecureCoding;
+ (void)CAMLParserStartElement:(id)arg1;
@property(getter=isInitial) BOOL initial; // @synthesize initial=_initial;
@property(nonatomic, getter=isLocked) BOOL locked; // @synthesize locked=_locked;
@property double previousDelay; // @synthesize previousDelay=_previousDelay;
@property double nextDelay; // @synthesize nextDelay=_nextDelay;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(copy) NSString *basedOn; // @synthesize basedOn=_basedOn;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (void)foreachLayer:(CDUnknownBlockType)arg1;
- (void)removeElement:(id)arg1;
- (void)addElement:(id)arg1;
@property(copy, nonatomic) NSArray *elements;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

