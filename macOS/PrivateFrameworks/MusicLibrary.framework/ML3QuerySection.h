//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ML3QuerySection : NSObject
{
    unsigned long long _sectionIndex;
    struct _NSRange _range;
}

@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRange:(struct _NSRange)arg1 sectionIndex:(unsigned long long)arg2;

@end

