//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class MapsSyncManagedFavoriteItem, NSString;

__attribute__((visibility("hidden")))
@interface MapsSyncManagedContactHandle : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000000af570

// Remaining properties
@property(nonatomic, retain) MapsSyncManagedFavoriteItem *favoriteItem; // @dynamic favoriteItem;
@property(nonatomic, copy) NSString *handle; // @dynamic handle;

@end
