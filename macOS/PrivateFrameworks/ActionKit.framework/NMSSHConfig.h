//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NMSSHConfig : NSObject
{
    NSArray *_hostConfigs;
}

+ (id)configFromFile:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *hostConfigs; // @synthesize hostConfigs=_hostConfigs;
- (BOOL)host:(id)arg1 matchesSubpattern:(id)arg2;
- (int)host:(id)arg1 matchesPatternList:(id)arg2;
- (id)hostConfigForHost:(id)arg1;
- (struct _NSRange)rangeOfFirstTokenInString:(id)arg1 suffix:(id *)arg2;
- (struct _NSRange)rangeInString:(id)arg1 fromLocationUntilBlankOrEnd:(unsigned long long)arg2;
- (struct _NSRange)rangeOfQuotedSubstringInString:(id)arg1 startingAtIndex:(unsigned long long)arg2;
- (id)blanksCharacterSet;
- (void)parseIdentityFileWithArguments:(id)arg1 intoArray:(id)arg2;
- (void)parsePortWithArguments:(id)arg1 intoArray:(id)arg2;
- (void)parseUserWithArguments:(id)arg1 intoArray:(id)arg2;
- (void)parseHostNameWithArguments:(id)arg1 intoArray:(id)arg2;
- (void)parseHostWithArguments:(id)arg1 intoArray:(id)arg2;
- (void)parseLine:(id)arg1 intoArray:(id)arg2;
- (id)arrayFromString:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithFile:(id)arg1;

@end

