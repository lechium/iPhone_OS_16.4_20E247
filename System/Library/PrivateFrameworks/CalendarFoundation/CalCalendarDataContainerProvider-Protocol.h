//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarFoundation/NSObject-Protocol.h>

@class NSString, NSURL;
@protocol CalCalendarDataContainerInfo;

@protocol CalCalendarDataContainerProvider <NSObject>
- (_Bool)accountUsesDataSeparatedContainer:(NSString *)arg1;
- (NSURL *)containerForAccountIdentifier:(NSString *)arg1;
- (id <CalCalendarDataContainerInfo>)containerInfoForPersonaIdentifier:(NSString *)arg1;
- (id <CalCalendarDataContainerInfo>)containerInfoForAccountIdentifier:(NSString *)arg1;
@end
