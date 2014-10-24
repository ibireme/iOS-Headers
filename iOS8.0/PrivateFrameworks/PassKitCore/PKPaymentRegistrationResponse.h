//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface PKPaymentRegistrationResponse : PKPaymentWebServiceResponse
{
    NSString *_deviceIdentifier;
    NSArray *_certificates;
    NSNumber *_cardsOnFile;
    NSURL *_brokerURL;
    NSURL *_trustedServiceManagerURL;
    NSURL *_paymentServicesURL;
    NSNumber *_maxCards;
}

@property(retain, nonatomic) NSNumber *maxCards; // @synthesize maxCards=_maxCards;
@property(retain, nonatomic) NSURL *paymentServicesURL; // @synthesize paymentServicesURL=_paymentServicesURL;
@property(retain, nonatomic) NSURL *trustedServiceManagerURL; // @synthesize trustedServiceManagerURL=_trustedServiceManagerURL;
@property(retain, nonatomic) NSURL *brokerURL; // @synthesize brokerURL=_brokerURL;
@property(retain, nonatomic) NSNumber *cardsOnFile; // @synthesize cardsOnFile=_cardsOnFile;
@property(retain, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end
