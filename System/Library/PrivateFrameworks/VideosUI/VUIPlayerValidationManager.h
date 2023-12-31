//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface VUIPlayerValidationManager : NSObject
{
    NSMapTable *_playerCounts;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00600000000d1ad5
- (void).cxx_destruct;	// IMP=0x00000000000d1ebe
@property(retain, nonatomic) NSMapTable *playerCounts; // @synthesize playerCounts=_playerCounts;
- (void)removeReferenceForPlayer:(id)arg1;	// IMP=0x00000000000d1cd0
- (void)addReferenceForPlayer:(id)arg1;	// IMP=0x00000000000d1bae
- (id)_init;	// IMP=0x00000000000d1b48
- (id)init;	// IMP=0x00000000000d1b3a

@end

