//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class NSString;

@interface NSDictionary (Intents)
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x001000000036c437
- (id)_intents_indexingRepresentation;	// IMP=0x00100000002aede3
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00100000002aec7a
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x001000000036c1ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

