//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNCountryInformation, NSString;

@interface PKCountryInformation : NSObject
{
    CNCountryInformation *_countryInformation;
    NSString *_localizedCountryName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *localizedCountryName; // @synthesize localizedCountryName=_localizedCountryName;
@property(retain, nonatomic) CNCountryInformation *countryInformation; // @synthesize countryInformation=_countryInformation;

@end

