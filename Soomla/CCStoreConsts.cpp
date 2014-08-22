/*
 Copyright (C) 2012-2014 Soomla Inc.
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

//  Created by Igor Yegoroff on 5/17/13.

#include "CCStoreConsts.h"

namespace soomla {

    char const *CCStoreConsts::JSON_STORE_CURRENCIES = "currencies";
    char const *CCStoreConsts::JSON_STORE_CURRENCY_PACKS = "currencyPacks";
    char const *CCStoreConsts::JSON_STORE_GOODS = "goods";
    char const *CCStoreConsts::JSON_STORE_CATEGORIES = "categories";
    char const *CCStoreConsts::JSON_STORE_NON_CONSUMABLES = "nonConsumables";
    char const *CCStoreConsts::JSON_STORE_GOODS_SU = "singleUse";
    char const *CCStoreConsts::JSON_STORE_GOODS_PA = "goodPacks";
    char const *CCStoreConsts::JSON_STORE_GOODS_UP = "goodUpgrades";
    char const *CCStoreConsts::JSON_STORE_GOODS_LT = "lifetime";
    char const *CCStoreConsts::JSON_STORE_GOODS_EQ = "equippable";

    char const *CCStoreConsts::JSON_CATEGORY_NAME = "name";
    char const *CCStoreConsts::JSON_CATEGORY_GOODS_ITEM_IDS = "goods_itemIds";

    char const *CCStoreConsts::JSON_MARKET_ITEM_PRODUCT_ID = "productId";
    char const *CCStoreConsts::JSON_MARKET_ITEM_ANDROID_ID = "androidId";
    char const *CCStoreConsts::JSON_MARKET_ITEM_IOS_ID = "iosId";

    char const *CCStoreConsts::JSON_MARKET_ITEM_CONSUMABLE = "consumable";
    char const *CCStoreConsts::JSON_MARKET_ITEM_PRICE = "price";

    char const *CCStoreConsts::JSON_MARKET_ITEM_MARKET_PRICE = "market_price";
    char const *CCStoreConsts::JSON_MARKET_ITEM_MARKET_TITLE = "market_title";
    char const *CCStoreConsts::JSON_MARKET_ITEM_MARKET_DESCRIPTION = "market_desc";

    char const *CCStoreConsts::JSON_EQUIPPABLE_EQUIPPING = "equipping";

    char const *CCStoreConsts::JSON_VGP_GOOD_ITEM_ID = "good_itemId";
    char const *CCStoreConsts::JSON_VGP_GOOD_AMOUNT = "good_amount";

    char const *CCStoreConsts::JSON_VGU_GOOD_ITEM_ID = "good_itemId";
    char const *CCStoreConsts::JSON_VGU_PREV_ITEM_ID = "prev_itemId";
    char const *CCStoreConsts::JSON_VGU_NEXT_ITEM_ID = "next_itemId";

    char const *CCStoreConsts::JSON_CURRENCY_PACK_CURRENCY_AMOUNT = "currency_amount";
    char const *CCStoreConsts::JSON_CURRENCY_PACK_CURRENCY_ITEM_ID = "currency_itemId";

    char const *CCStoreConsts::JSON_PURCHASABLE_ITEM = "purchasableItem";

    char const *CCStoreConsts::JSON_PURCHASE_TYPE = "purchaseType";
    char const *CCStoreConsts::JSON_PURCHASE_TYPE_MARKET = "market";
    char const *CCStoreConsts::JSON_PURCHASE_TYPE_VI = "virtualItem";

    char const *CCStoreConsts::JSON_PURCHASE_MARKET_ITEM = "marketItem";

    char const *CCStoreConsts::JSON_PURCHASE_VI_ITEM_ID = "pvi_itemId";
    char const *CCStoreConsts::JSON_PURCHASE_VI_AMOUNT = "pvi_amount";

    char const *CCStoreConsts::JSON_AMOUNT = "amount";
    char const *CCStoreConsts::JSON_ASSOCIATED_ITEM_ID = "associatedItemId";

    char const *CCStoreConsts::JSON_JSON_TYPE_VIRTUAL_ITEM = "virtualItem";
    char const *CCStoreConsts::JSON_JSON_TYPE_MARKET_ITEM = "marketItem";
    char const *CCStoreConsts::JSON_JSON_TYPE_NON_CONSUMABLE_ITEM = "nonConsumableItem";
    char const *CCStoreConsts::JSON_JSON_TYPE_PURCHASABLE_VIRTUAL_ITEM = "purchasableVirtualItem";
    char const *CCStoreConsts::JSON_JSON_TYPE_VIRTUAL_CATEGORY = "virtualCategory";
    char const *CCStoreConsts::JSON_JSON_TYPE_VIRTUAL_CURRENCY = "virtualCurrency";
    char const *CCStoreConsts::JSON_JSON_TYPE_VIRTUAL_CURRENCY_PACK = "virtualCurrencyPack";
    char const *CCStoreConsts::JSON_JSON_TYPE_EQUIPPABLE_VG = "equippableVG";
    char const *CCStoreConsts::JSON_JSON_TYPE_LIFETIME_VG = "lifetimeVG";
    char const *CCStoreConsts::JSON_JSON_TYPE_SINGLE_USE_PACK_VG = "singleUsePackVG";
    char const *CCStoreConsts::JSON_JSON_TYPE_SINGLE_USE_VG = "singleUseVG";
    char const *CCStoreConsts::JSON_JSON_TYPE_UPGRADE_VG = "upgradeVG";
    char const *CCStoreConsts::JSON_JSON_TYPE_VIRTUAL_GOOD = "virtualGood";
    char const *CCStoreConsts::JSON_JSON_TYPE_ITEM = "item";

    char const *CCStoreConsts::EVENT_BILLING_NOT_SUPPORTED = "CCStoreEventHandler::onBillingNotSupported";
    char const *CCStoreConsts::EVENT_BILLING_SUPPORTED = "CCStoreEventHandler::onBillingSupported";
    char const *CCStoreConsts::EVENT_CURRENCY_BALANCE_CHANGED = "CCStoreEventHandler::onCurrencyBalanceChanged";
    char const *CCStoreConsts::EVENT_GOOD_BALANCE_CHANGED = "CCStoreEventHandler::onGoodBalanceChanged";
    char const *CCStoreConsts::EVENT_GOOD_EQUIPPED = "CCStoreEventHandler::onGoodEquipped";
    char const *CCStoreConsts::EVENT_GOOD_UNEQUIPPED = "CCStoreEventHandler::onGoodUnEquipped";
    char const *CCStoreConsts::EVENT_GOOD_UPGRADE = "CCStoreEventHandler::onGoodUpgrade";
    char const *CCStoreConsts::EVENT_ITEM_PURCHASED = "CCStoreEventHandler::onItemPurchased";
    char const *CCStoreConsts::EVENT_ITEM_PURCHASE_STARTED = "CCStoreEventHandler::onItemPurchaseStarted";
    char const *CCStoreConsts::EVENT_MARKET_PURCHASE_CANCELED = "CCStoreEventHandler::onMarketPurchaseCancelled";
    char const *CCStoreConsts::EVENT_MARKET_PURCHASE = "CCStoreEventHandler::onMarketPurchase";
    char const *CCStoreConsts::EVENT_MARKET_PURCHASE_STARTED = "CCStoreEventHandler::onMarketPurchaseStarted";
    char const *CCStoreConsts::EVENT_MARKET_ITEMS_REFRESHED = "CCStoreEventHandler::onMarketItemsRefreshed";
    char const *CCStoreConsts::EVENT_MARKET_ITEMS_REFRESH_STARTED = "CCStoreEventHandler::onMarketItemsRefreshStarted";
    char const *CCStoreConsts::EVENT_MARKET_PURCHASE_VERIFICATION = "CCStoreEventHandler::onMarketPurchaseVerification";
    char const *CCStoreConsts::EVENT_RESTORE_TRANSACTION_FINISHED = "CCStoreEventHandler::onRestoreTransactionsFinished";
    char const *CCStoreConsts::EVENT_RESTORE_TRANSACTION_STARTED = "CCStoreEventHandler::onRestoreTransactionsStarted";
    char const *CCStoreConsts::EVENT_UNEXPECTED_ERROR_IN_STORE = "CCStoreEventHandler::onUnexpectedErrorInStore";
    char const *CCStoreConsts::EVENT_STORE_CONTROLLER_INITIALIZED = "CCStoreEventHandler::onStoreControllerInitialized";
    char const *CCStoreConsts::EVENT_MARKET_REFUND = "CCStoreEventHandler::onMarketRefund";
    char const *CCStoreConsts::EVENT_IAB_SERVICE_STARTED = "CCStoreEventHandler::onIabServiceStarted";
    char const *CCStoreConsts::EVENT_IAB_SERVICE_STOPPED = "CCStoreEventHandler::onIabServiceStopped";

}