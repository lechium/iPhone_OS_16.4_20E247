//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSString;

@interface REMCDReplicaManager : NSManagedObject
{
}

+ (id)cdEntityName;	// IMP=0x00100000000557d2
+ (id)fetchRequest;	// IMP=0x001000000005467a

// Remaining properties
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSData *managerData; // @dynamic managerData;
@property(nonatomic) long long version; // @dynamic version;

@end

