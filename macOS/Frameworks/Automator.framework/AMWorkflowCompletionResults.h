//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Automator/NSSecureCoding-Protocol.h>

@class NSError;

@interface AMWorkflowCompletionResults : NSObject <NSSecureCoding>
{
    id _output;
    NSError *_error;
    BOOL _workflowCouldNotStart;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property BOOL workflowCouldNotStart; // @synthesize workflowCouldNotStart=_workflowCouldNotStart;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) id output; // @synthesize output=_output;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOutput:(id)arg1 error:(id)arg2;

@end

