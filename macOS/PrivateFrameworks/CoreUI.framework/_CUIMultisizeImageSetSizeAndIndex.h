//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CUIMultisizeImageSetSizeAndIndex : NSObject
{
    struct CGSize _size;
    unsigned int _index;
    long long _idiom;
    unsigned long long _subtype;
}

@property(nonatomic) unsigned long long subtype; // @synthesize subtype=_subtype;
@property(nonatomic) long long idiom; // @synthesize idiom=_idiom;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)description;
- (id)initWithSize:(struct CGSize)arg1 index:(unsigned int)arg2 idiom:(long long)arg3 subtype:(unsigned long long)arg4;

@end

