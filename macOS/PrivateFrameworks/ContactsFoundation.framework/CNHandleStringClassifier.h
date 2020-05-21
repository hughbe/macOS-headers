//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _CNHandleStringClassificationStrategy;

@interface CNHandleStringClassifier : NSObject
{
    id <_CNHandleStringClassificationStrategy> _classificationStrategy;
}

+ (id)classificationStrategyForQuality:(unsigned long long)arg1;
+ (id)classificationOfHandleStrings:(id)arg1 classificationQuality:(unsigned long long)arg2;
+ (id)classificationOfHandleStrings:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <_CNHandleStringClassificationStrategy> classificationStrategy; // @synthesize classificationStrategy=_classificationStrategy;
- (unsigned long long)typeOfHandleString:(id)arg1;
- (void)classifyHandleString:(id)arg1 builder:(id)arg2;
- (id)description;
- (id)initWithClassificationStrategy:(id)arg1;
- (id)initWithClassificationQuality:(unsigned long long)arg1;
- (id)init;

@end

