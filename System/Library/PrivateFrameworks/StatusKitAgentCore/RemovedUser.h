//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface RemovedUser : NSManagedObject
{
}

+ (id)presenceIdentifierKeyPath;	// IMP=0x008000000000dada
+ (id)statusTypeIdentifierKeyPath;	// IMP=0x008000000000dacd
+ (id)handleKeyPath;	// IMP=0x008000000000dac0
+ (id)dateRemovedKeyPath;	// IMP=0x008000000000dab3
+ (id)predicateForPresenceIdentifier:(id)arg1;	// IMP=0x008000000000dc7d
+ (id)predicateForStatusTypeIdentifier:(id)arg1;	// IMP=0x008000000000dbe3
+ (id)predicateForHandleString:(id)arg1;	// IMP=0x008000000000db49
+ (id)predicateForHandle:(id)arg1;	// IMP=0x008000000000dae7
+ (id)fetchRequest;	// IMP=0x0080000000073462

// Remaining properties
@property(copy, nonatomic) NSDate *dateRemoved; // @dynamic dateRemoved;
@property(copy, nonatomic) NSString *presenceIdentifier; // @dynamic presenceIdentifier;
@property(copy, nonatomic) NSString *removedHandle; // @dynamic removedHandle;
@property(copy, nonatomic) NSString *statusTypeIdentifier; // @dynamic statusTypeIdentifier;

@end
