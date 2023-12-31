//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (MRAVAdditions)
@property(readonly, nonatomic) NSArray *mr_redactClusterMembers;
@property(readonly, nonatomic) NSArray *mr_allOutputDevices;
- (id)mr_arrayByRemovingLocalEndpoint;	// IMP=0x0030000000184b89
- (_Bool)mr_isEqualToOutputDevicesArray:(id)arg1;	// IMP=0x0030000000184a4f
- (int)mr_ifDisabledWhyDisabled:(unsigned int)arg1;	// IMP=0x003000000018d4f0
- (_Bool)mr_isCommandSupportedAndEnabled:(unsigned int)arg1;	// IMP=0x003000000018d44d
- (_Bool)mr_isCommandSupported:(unsigned int)arg1;	// IMP=0x003000000018d3d6
@property(readonly, nonatomic) NSString *mr_formattedDebugDescription;
- (id)changeDescriptionTo:(id)arg1 keyBlock:(CDUnknownBlockType)arg2 isUpdatedBlock:(CDUnknownBlockType)arg3 descriptionBlock:(CDUnknownBlockType)arg4;	// IMP=0x003000000023fdfd
- (id)mr_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x003000000023fc3b
- (id)mr_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x003000000023fa99
- (id)mr_map:(CDUnknownBlockType)arg1;	// IMP=0x003000000023f897
- (id)mr_filter:(CDUnknownBlockType)arg1;	// IMP=0x003000000023f6ea
- (_Bool)mr_containsAnyOf:(id)arg1;	// IMP=0x003000000023f597
- (id)mr_first:(CDUnknownBlockType)arg1;	// IMP=0x003000000023f441
- (_Bool)mr_all:(CDUnknownBlockType)arg1;	// IMP=0x003000000023f308
- (_Bool)mr_any:(CDUnknownBlockType)arg1;	// IMP=0x003000000023f1ce
@end

