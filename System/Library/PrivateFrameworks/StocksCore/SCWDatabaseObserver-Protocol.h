//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SCWDatabase;
@protocol SCWZoneReading;

@protocol SCWDatabaseObserver
- (void)database:(SCWDatabase *)arg1 didChangeZone:(NSString *)arg2 from:(id <SCWZoneReading>)arg3 to:(id <SCWZoneReading>)arg4;
@end

