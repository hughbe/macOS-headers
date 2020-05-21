//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol _SFPBContactImage <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) BOOL threeDTouchEnabled;
@property(copy, nonatomic) NSArray *contactIdentifiers;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)contactIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contactIdentifiersCount;
- (void)addContactIdentifiers:(NSString *)arg1;
- (void)clearContactIdentifiers;
@end

