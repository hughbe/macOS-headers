//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@protocol CNUIUserActionListConsumerDelegate, CNUIUserActionListDataSource;

@protocol CNUIUserActionListConsumer <NSObject>

@optional
- (id <CNUIUserActionListConsumerDelegate>)delegate;
- (id <CNUIUserActionListDataSource>)dataSource;
@end

