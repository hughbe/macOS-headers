//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FATField : NSObject
{
    BOOL _optional;
    unsigned int _index;
    unsigned int _type;
    NSString *_name;
    Class _structClass;
    FATField *_valueField;
    FATField *_keyField;
}

+ (id)nameForFatFieldType:(unsigned int)arg1;
+ (id)fieldWithIndex:(unsigned int)arg1 type:(unsigned int)arg2 optional:(BOOL)arg3 name:(id)arg4 keyField:(id)arg5 valueField:(id)arg6;
+ (id)fieldWithIndex:(unsigned int)arg1 type:(unsigned int)arg2 optional:(BOOL)arg3 name:(id)arg4 valueField:(id)arg5;
+ (id)fieldWithIndex:(unsigned int)arg1 type:(unsigned int)arg2 optional:(BOOL)arg3 name:(id)arg4 structClass:(Class)arg5;
+ (id)fieldWithIndex:(unsigned int)arg1 type:(unsigned int)arg2 optional:(BOOL)arg3 name:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) FATField *keyField; // @synthesize keyField=_keyField;
@property(retain, nonatomic) FATField *valueField; // @synthesize valueField=_valueField;
@property(nonatomic) Class structClass; // @synthesize structClass=_structClass;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property BOOL optional; // @synthesize optional=_optional;
@property unsigned int type; // @synthesize type=_type;
@property unsigned int index; // @synthesize index=_index;
- (id)description;

@end

