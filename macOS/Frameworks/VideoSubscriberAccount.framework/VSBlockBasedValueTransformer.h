//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@interface VSBlockBasedValueTransformer : NSValueTransformer
{
    CDUnknownBlockType _transformationBlock;
    CDUnknownBlockType _reverseTransformationBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType reverseTransformationBlock; // @synthesize reverseTransformationBlock=_reverseTransformationBlock;
@property(copy, nonatomic) CDUnknownBlockType transformationBlock; // @synthesize transformationBlock=_transformationBlock;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;
- (id)init;

@end

