//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CUIPSDLayoutMetricsChannel : NSObject
{
    struct CGRect _edgeInsets;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) struct CGRect edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void)setEdgeInsets:(struct CGRect)arg1;
- (id)initWithEdgeInsets:(struct CGRect)arg1;
- (void)sanitizeEdgeInsets;
- (void)dealloc;

@end

