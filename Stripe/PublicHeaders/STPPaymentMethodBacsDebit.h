//
//  STPPaymentMethodBacsDebit.h
//  StripeiOS
//
//  Created by Yuki Tokuhiro on 1/28/20.
//  Copyright © 2020 Stripe, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "STPAPIResponseDecodable.h"

NS_ASSUME_NONNULL_BEGIN

/**
 A Bacs Debit Payment Method.
 
 @see https://stripe.com/docs/api/payment_methods/object#payment_method_object-bacs_debit
 */
@interface STPPaymentMethodBacsDebit : NSObject <STPAPIResponseDecodable>

/**
You cannot directly instantiate an `STPPaymentMethodBacsDebit`.
You should only use one that is part of an existing `STPPaymentMethod` object.
*/
- (instancetype)init NS_UNAVAILABLE;

/**
 TODO
 */
@property (nonatomic, nullable, readonly) NSString *fingerprint;

/**
 TODO
 */
@property (nonatomic, nullable, readonly) NSString *last4;

/**
 TODO
 */
@property (nonatomic, nullable, readonly) NSString *sortCode;

@end

NS_ASSUME_NONNULL_END
