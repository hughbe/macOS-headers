//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSObject.h>

@class NSDate, NSString;

@interface CLSAbstractHandout : CLSObject
{
    NSString *_title;
    NSString *_instructions;
    NSDate *_dueDate;
    NSDate *_dateOfPublication;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)mergeWithObject:(id)arg1;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSDate *dateOfPublication;
@property(retain, nonatomic) NSDate *dueDate;
@property(copy, nonatomic) NSString *instructions;
@property(copy, nonatomic) NSString *title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)init;

@end

