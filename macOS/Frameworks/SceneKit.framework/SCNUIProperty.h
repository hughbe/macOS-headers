//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCNUIProperty : NSObject
{
    BOOL readonly;
    int type;
    NSString *name;
    Class objectClass;
}

- (void).cxx_destruct;
@property(retain, nonatomic) Class objectClass; // @synthesize objectClass;
@property(nonatomic) BOOL readonly; // @synthesize readonly;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *name; // @synthesize name;

@end

