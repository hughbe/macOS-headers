//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/SFRSASigningOperation.h>

@protocol SFMaskGenerationFunction;

__attribute__((visibility("hidden")))
@interface SFRSA_PSSSigningOperation : SFRSASigningOperation
{
    id _pssSigningOperationInternal;
}

- (void).cxx_destruct;
@property(copy, nonatomic) id <SFMaskGenerationFunction> maskGenerationFunction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2 maskGenerationFunction:(id)arg3;
- (id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2;

@end

