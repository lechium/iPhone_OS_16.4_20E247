//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/IDSDataChannelLinkContext.h>

__attribute__((visibility("hidden")))
@interface VCMockIDSDataChannelLinkContext : IDSDataChannelLinkContext
{
    _Bool _forceNetworkCellular;	// 16 = 0x10
    _Bool _idsUPlusOneMode;	// 17 = 0x11
}

@property(nonatomic) _Bool idsUPlusOneMode; // @synthesize idsUPlusOneMode=_idsUPlusOneMode;
- (_Bool)isVirtualRelayLink;	// IMP=0x0000000000310350
- (long long)connectionType;	// IMP=0x0000000000310345
- (unsigned int)remoteRATType;	// IMP=0x0000000000310331
- (unsigned int)RATType;	// IMP=0x000000000031031d
- (id)init;	// IMP=0x00000000003101e5

@end

