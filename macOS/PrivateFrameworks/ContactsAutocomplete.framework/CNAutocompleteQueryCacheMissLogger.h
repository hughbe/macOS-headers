//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteQueryCacheMissLogging-Protocol.h>

@class NSArray, NSString;

@interface CNAutocompleteQueryCacheMissLogger : NSObject <CNAutocompleteQueryCacheMissLogging>
{
    NSArray *_loggers;
}

- (void).cxx_destruct;
@property(copy) NSArray *loggers; // @synthesize loggers=_loggers;
- (void)didReturnCacheFalsePositives:(id)arg1;
- (void)didReturnCacheFalseNegatives:(id)arg1;
- (id)initWithLoggers:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

