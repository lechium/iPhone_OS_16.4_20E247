//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsEntry.h>

@interface MapsSuggestionsEntry (DoomExtras)
+ (id)sharedDefaults;	// IMP=0x00100000000359e5
+ (void)removeStaleArchivedDestinations;	// IMP=0x0010000000035092
+ (id)archivedDestinationForUniqueID:(id)arg1;	// IMP=0x0010000000034df6
- (id)notificationDetailsWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x00200000000358c2
- (void)archiveDestination;	// IMP=0x0010000000035493
@end
