//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol _PARBagRequest <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int tuscanyOption;
@property(copy, nonatomic) NSArray *preferredLanguages;
@property(copy, nonatomic) NSString *effectiveSystemLanguage;
@property(copy, nonatomic) NSString *locale;
@property(copy, nonatomic) NSString *secretKey;
@property(copy, nonatomic) NSString *countryCode;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)preferredLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)preferredLanguagesCount;
- (void)addPreferredLanguages:(NSString *)arg1;
- (void)clearPreferredLanguages;
@end

