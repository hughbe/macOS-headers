//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DECondition : NSObject
{
    shared_ptr_92af2b80 _This;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property shared_ptr_92af2b80 This; // @synthesize This=_This;
- (_Bool)evaluate:(id)arg1;
- (_Bool)validate:(id)arg1;
- (void)addEntry:(id)arg1;
@property NSArray *entries;
@property NSString *name;
- (shared_ptr_92af2b80 *)getSharedPtr;
- (id)initWithSharedPtr:(shared_ptr_92af2b80 *)arg1;
- (id)init;

@end

